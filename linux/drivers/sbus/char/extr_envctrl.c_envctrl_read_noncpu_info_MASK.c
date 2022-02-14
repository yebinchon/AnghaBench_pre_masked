
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

__attribute__((used)) static int FUNC_2(struct i2c_child_t *VAR_1,
        char VAR_2, unsigned char *VAR_3)
{
 unsigned char VAR_4;
 int VAR_5;
 char *VAR_6 = ((void*)0);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_1->mon_type[VAR_5] == VAR_2)
   break;
 }

 if (VAR_5 >= VAR_0)
  return 0;


 VAR_4 = FUNC_1((unsigned char)VAR_1->addr,
         (unsigned char)VAR_1->chnl_array[VAR_5].chnl_no);


 VAR_6 = VAR_1->tables + VAR_1->tblprop_array[VAR_5].offset;

 return FUNC_0(VAR_4, VAR_1->tblprop_array[VAR_5].type,
       VAR_1->tblprop_array[VAR_5].scale,
       VAR_6, VAR_3);
}
