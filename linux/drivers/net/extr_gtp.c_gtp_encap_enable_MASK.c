
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct sock {int dummy; } ;
struct nlattr {int dummy; } ;
struct gtp_dev {unsigned int role; struct sock* sk1u; struct sock* sk0; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct sock*) ;
 struct sock* FUNC_3 (void*,int ,struct gtp_dev*) ;
 void* FUNC_4 (struct nlattr*) ;

__attribute__((used)) static int FUNC_5(struct gtp_dev *VAR_8, struct nlattr *VAR_9[])
{
 struct sock *VAR_10 = ((void*)0);
 struct sock *VAR_11 = ((void*)0);
 unsigned int VAR_12 = VAR_1;

 if (VAR_9[VAR_3]) {
  u32 VAR_13 = FUNC_4(VAR_9[VAR_3]);

  VAR_11 = FUNC_3(VAR_13, VAR_6, VAR_8);
  if (FUNC_0(VAR_11))
   return FUNC_1(VAR_11);
 }

 if (VAR_9[VAR_4]) {
  u32 VAR_14 = FUNC_4(VAR_9[VAR_4]);

  VAR_10 = FUNC_3(VAR_14, VAR_7, VAR_8);
  if (FUNC_0(VAR_10)) {
   if (VAR_11)
    FUNC_2(VAR_11);
   return FUNC_1(VAR_10);
  }
 }

 if (VAR_9[VAR_5]) {
  VAR_12 = FUNC_4(VAR_9[VAR_5]);
  if (VAR_12 > VAR_2) {
   if (VAR_11)
    FUNC_2(VAR_11);
   if (VAR_10)
    FUNC_2(VAR_10);
   return -VAR_0;
  }
 }

 VAR_8->sk0 = VAR_11;
 VAR_8->sk1u = VAR_10;
 VAR_8->role = VAR_12;

 return 0;
}
