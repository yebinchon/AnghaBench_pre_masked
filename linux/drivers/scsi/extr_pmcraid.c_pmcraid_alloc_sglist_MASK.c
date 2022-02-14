
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcraid_sglist {int order; int num_sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct pmcraid_sglist* FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int,int,int *) ;

__attribute__((used)) static struct pmcraid_sglist *FUNC_3(int VAR_4)
{
 struct pmcraid_sglist *VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_6 = VAR_4 / (VAR_2 - 1);
 VAR_7 = (VAR_6 > 0) ? FUNC_0(VAR_6) : 0;


 VAR_5 = FUNC_1(sizeof(struct pmcraid_sglist), VAR_1);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_5->order = VAR_7;
 FUNC_2(VAR_4, VAR_7, 0,
   VAR_1 | VAR_0 | VAR_3, &VAR_5->num_sg);

 return VAR_5;
}
