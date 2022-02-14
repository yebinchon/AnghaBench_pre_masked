
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sock_reuseport {int dummy; } ;
struct sock {scalar_t__ sk_protocol; scalar_t__ sk_family; scalar_t__ sk_type; int sk_user_data; } ;
struct reuseport_array {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (struct sock const*) ;
 int FUNC_2 (struct sock const*,int ) ;

__attribute__((used)) static int
FUNC_3(const struct reuseport_array *VAR_14,
        const struct sock *VAR_15,
        const struct sock *VAR_16,
        const struct sock_reuseport *VAR_17,
        u32 VAR_18)
{
 if (VAR_16 && VAR_18 == VAR_3)
  return -VAR_5;

 if (!VAR_16 && VAR_18 == VAR_2)
  return -VAR_7;

 if (VAR_15->sk_protocol != VAR_10 && VAR_15->sk_protocol != VAR_9)
  return -VAR_8;

 if (VAR_15->sk_family != VAR_0 && VAR_15->sk_family != VAR_1)
  return -VAR_8;

 if (VAR_15->sk_type != VAR_13 && VAR_15->sk_type != VAR_11)
  return -VAR_8;
 if (!FUNC_2(VAR_15, VAR_12) || !FUNC_1(VAR_15) || !VAR_17)
  return -VAR_6;


 if (FUNC_0(VAR_15->sk_user_data))
  return -VAR_4;

 return 0;
}
