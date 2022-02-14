
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipr_sglist {int order; int scatterlist; int num_sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct ipr_sglist*) ;
 struct ipr_sglist* FUNC_2 (int,int ) ;
 int FUNC_3 (int,int,int,int ,int *) ;

__attribute__((used)) static struct ipr_sglist *FUNC_4(int VAR_3)
{
 int VAR_4, VAR_5;
 struct ipr_sglist *VAR_6;


 VAR_4 = VAR_3 / (VAR_1 - 1);


 VAR_5 = FUNC_0(VAR_4);


 VAR_6 = FUNC_2(sizeof(struct ipr_sglist), VAR_0);
 if (VAR_6 == ((void*)0)) {
  VAR_2;
  return ((void*)0);
 }
 VAR_6->order = VAR_5;
 VAR_6->scatterlist = FUNC_3(VAR_3, VAR_5, 0, VAR_0,
           &VAR_6->num_sg);
 if (!VAR_6->scatterlist) {
  FUNC_1(VAR_6);
  return ((void*)0);
 }

 return VAR_6;
}
