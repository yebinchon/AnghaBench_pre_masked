
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuset {int mems_allowed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct cpuset VAR_3 ;
 int FUNC_6 (struct cpuset*,int *) ;
 int FUNC_7 (struct cpuset*,struct cpuset*) ;

__attribute__((used)) static int FUNC_8(struct cpuset *VAR_4, struct cpuset *VAR_5,
      const char *VAR_6)
{
 int VAR_7;





 if (VAR_4 == &VAR_3) {
  VAR_7 = -VAR_0;
  goto done;
 }







 if (!*VAR_6) {
  FUNC_1(VAR_5->mems_allowed);
 } else {
  VAR_7 = FUNC_0(VAR_6, VAR_5->mems_allowed);
  if (VAR_7 < 0)
   goto done;

  if (!FUNC_3(VAR_5->mems_allowed,
      VAR_3.mems_allowed)) {
   VAR_7 = -VAR_1;
   goto done;
  }
 }

 if (FUNC_2(VAR_4->mems_allowed, VAR_5->mems_allowed)) {
  VAR_7 = 0;
  goto done;
 }
 VAR_7 = FUNC_7(VAR_4, VAR_5);
 if (VAR_7 < 0)
  goto done;

 FUNC_4(&VAR_2);
 VAR_4->mems_allowed = VAR_5->mems_allowed;
 FUNC_5(&VAR_2);


 FUNC_6(VAR_4, &VAR_5->mems_allowed);
done:
 return VAR_7;
}
