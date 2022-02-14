
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
typedef int gfp_t ;


 struct scatterlist* FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct scatterlist*,int) ;

__attribute__((used)) static struct scatterlist *FUNC_2(int VAR_0, gfp_t VAR_1)
{
 struct scatterlist *VAR_2;

 VAR_2 = FUNC_0(VAR_0, sizeof(*VAR_2), VAR_1);
 if (VAR_2)
  FUNC_1(VAR_2, VAR_0);

 return VAR_2;
}
