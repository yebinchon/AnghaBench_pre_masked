
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sense_buffer; } ;
struct isd200_info {TYPE_1__ srb; int RegsBuf; int id; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct isd200_info *VAR_1 = (struct isd200_info *) VAR_0;

 if (VAR_1) {
  FUNC_0(VAR_1->id);
  FUNC_0(VAR_1->RegsBuf);
  FUNC_0(VAR_1->srb.sense_buffer);
 }
}
