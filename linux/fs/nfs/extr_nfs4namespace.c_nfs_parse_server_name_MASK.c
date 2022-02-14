
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct net {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (struct net*,char*,size_t,struct sockaddr*,size_t) ;
 scalar_t__ FUNC_1 (struct net*,char*,size_t,struct sockaddr*,size_t) ;

__attribute__((used)) static size_t FUNC_2(char *VAR_0, size_t VAR_1,
  struct sockaddr *VAR_2, size_t VAR_3, struct net *VAR_4)
{
 ssize_t VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_5 == 0) {
  VAR_5 = FUNC_0(VAR_4, VAR_0, VAR_1, VAR_2, VAR_3);
  if (VAR_5 < 0)
   VAR_5 = 0;
 }
 return VAR_5;
}
