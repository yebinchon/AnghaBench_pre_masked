
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stats {int min; int max; int sigma; int samples; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,char*,int,int,int) ;

__attribute__((used)) static inline ssize_t FUNC_2(struct stats *VAR_1, char *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 int VAR_6 = FUNC_0(&VAR_1->samples);
 if (VAR_6 == 0)
  VAR_3 = VAR_4 = VAR_5 = 0;
 else {
  VAR_3 = VAR_1->min;
  VAR_4 = VAR_1->max;
  VAR_5 = VAR_1->sigma / VAR_6;
 }
 return FUNC_1(VAR_2, VAR_0, "%d %d %d\n", VAR_3, VAR_4, VAR_5);
}
