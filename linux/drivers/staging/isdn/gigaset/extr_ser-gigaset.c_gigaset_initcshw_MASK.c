
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int release; } ;
struct TYPE_6__ {TYPE_1__ dev; int id; int name; } ;
struct ser_cardstate {TYPE_3__ dev; } ;
struct TYPE_5__ {struct ser_cardstate* ser; } ;
struct cardstate {int write_tasklet; TYPE_2__ hw; int minor_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ser_cardstate*) ;
 struct ser_cardstate* FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct cardstate *VAR_5)
{
 int VAR_6;
 struct ser_cardstate *VAR_7;

 VAR_7 = FUNC_1(sizeof(struct ser_cardstate), VAR_1);
 if (!VAR_7) {
  FUNC_3("out of memory\n");
  return -VAR_0;
 }
 VAR_5->hw.ser = VAR_7;

 VAR_5->hw.ser->dev.name = VAR_2;
 VAR_5->hw.ser->dev.id = VAR_5->minor_index;
 VAR_5->hw.ser->dev.dev.release = VAR_3;
 VAR_6 = FUNC_2(&VAR_5->hw.ser->dev);
 if (VAR_6 != 0) {
  FUNC_3("error %d registering platform device\n", VAR_6);
  FUNC_0(VAR_5->hw.ser);
  VAR_5->hw.ser = ((void*)0);
  return VAR_6;
 }

 FUNC_4(&VAR_5->write_tasklet,
       VAR_4, (unsigned long) VAR_5);
 return 0;
}
