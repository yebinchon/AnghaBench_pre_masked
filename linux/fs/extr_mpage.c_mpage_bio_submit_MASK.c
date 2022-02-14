
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int bi_end_io; } ;


 int FUNC_0 (struct bio*,int,int) ;
 int FUNC_1 (int,struct bio*) ;
 int VAR_0 ;
 int FUNC_2 (struct bio*) ;

__attribute__((used)) static struct bio *FUNC_3(int VAR_1, int VAR_2, struct bio *VAR_3)
{
 VAR_3->bi_end_io = VAR_0;
 FUNC_0(VAR_3, VAR_1, VAR_2);
 FUNC_1(VAR_1, VAR_3);
 FUNC_2(VAR_3);
 return ((void*)0);
}
