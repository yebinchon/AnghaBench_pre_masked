
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scatterlist {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct scatterlist* FUNC_0 (int ,int ,int,int,unsigned int*) ;

int
FUNC_1(struct scatterlist **VAR_3, unsigned int *VAR_4, u32 VAR_5,
   bool VAR_6, bool VAR_7)
{
 gfp_t VAR_8 = VAR_1 | (VAR_6 ? VAR_2 : 0);

 *VAR_3 = FUNC_0(VAR_5, 0, VAR_7, VAR_8, VAR_4);
 return *VAR_3 ? 0 : -VAR_0;
}
