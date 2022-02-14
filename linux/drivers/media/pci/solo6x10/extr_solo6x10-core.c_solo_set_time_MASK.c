
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timespec64 {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct solo_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct timespec64*) ;
 int FUNC_1 (struct solo_dev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct solo_dev *VAR_3)
{
 struct timespec64 VAR_4;

 FUNC_0(&VAR_4);


 FUNC_1(VAR_3, VAR_1, (u32)VAR_4.tv_sec);
 FUNC_1(VAR_3, VAR_2, (u32)VAR_4.tv_nsec / VAR_0);
}
