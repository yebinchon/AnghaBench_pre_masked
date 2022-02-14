
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_child_t {char* mon_type; char* tables; TYPE_2__* tblprop_array; TYPE_1__* chnl_array; scalar_t__ addr; } ;
struct TYPE_4__ {int offset; int scale; int type; } ;
struct TYPE_3__ {scalar_t__ chnl_no; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char,int ,int ,char*,unsigned char*) ;
 unsigned char FUNC_1 (unsigned char,unsigned char) ;

__attribute__((used)) static int FUNC_2(int VAR_1, struct i2c_child_t *VAR_2,
     char VAR_3, unsigned char *VAR_4)
{
 unsigned char VAR_5;
 int VAR_6;
 char *VAR_7, VAR_8 = -1;


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_2->mon_type[VAR_6] == VAR_3) {
   if (++VAR_8 == VAR_1) {
    break;
   }
  }
 }

 if (VAR_8 != VAR_1)
  return 0;


 VAR_5 = FUNC_1((unsigned char)VAR_2->addr,
         (unsigned char)VAR_2->chnl_array[VAR_6].chnl_no);


 VAR_7 = VAR_2->tables + VAR_2->tblprop_array[VAR_6].offset;

 return FUNC_0(VAR_5, VAR_2->tblprop_array[VAR_6].type,
       VAR_2->tblprop_array[VAR_6].scale,
       VAR_7, VAR_4);
}
