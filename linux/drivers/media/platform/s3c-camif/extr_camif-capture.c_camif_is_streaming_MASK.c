
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct camif_dev {scalar_t__ stream_count; int slock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_2(struct camif_dev *VAR_0)
{
 unsigned long VAR_1;
 bool VAR_2;

 FUNC_0(&VAR_0->slock, VAR_1);
 VAR_2 = VAR_0->stream_count > 0;
 FUNC_1(&VAR_0->slock, VAR_1);

 return VAR_2;
}
