
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct fpgaimage {int * fpgadata; int lendata; int time; int date; int part; int filename; TYPE_1__* fw_entry; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int*) ;
 int FUNC_1 (int *,int *,int*) ;
 int FUNC_2 (int *,int*) ;

__attribute__((used)) static int FUNC_3(struct fpgaimage *VAR_1)
{
 u8 *VAR_2;
 int VAR_3;
 int VAR_4;

 VAR_3 = 0;
 VAR_2 = (u8 *)VAR_1->fw_entry->data;

 VAR_4 = FUNC_2(VAR_2, &VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1->filename, VAR_0, &VAR_3);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_0(VAR_2, VAR_1->part, VAR_0, &VAR_3);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_0(VAR_2, VAR_1->date, VAR_0, &VAR_3);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_0(VAR_2, VAR_1->time, VAR_0, &VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_2, &VAR_1->lendata, &VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_1->fpgadata = VAR_2 + VAR_3;

 return 0;
}
