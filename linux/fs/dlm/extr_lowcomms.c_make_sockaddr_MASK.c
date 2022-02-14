
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr_in6 {void* sin6_port; } ;
struct sockaddr_in {char sin_zero; void* sin_port; } ;
struct TYPE_2__ {scalar_t__ ss_family; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ) ;
 TYPE_1__** VAR_1 ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct sockaddr_storage *VAR_2, uint16_t VAR_3,
     int *VAR_4)
{
 VAR_2->ss_family = VAR_1[0]->ss_family;
 if (VAR_2->ss_family == VAR_0) {
  struct sockaddr_in *VAR_5 = (struct sockaddr_in *)VAR_2;
  VAR_5->sin_port = FUNC_0(VAR_3);
  *VAR_4 = sizeof(struct sockaddr_in);
  FUNC_1(&VAR_5->sin_zero, 0, sizeof(VAR_5->sin_zero));
 } else {
  struct sockaddr_in6 *VAR_6 = (struct sockaddr_in6 *)VAR_2;
  VAR_6->sin6_port = FUNC_0(VAR_3);
  *VAR_4 = sizeof(struct sockaddr_in6);
 }
 FUNC_1((char *)VAR_2 + *VAR_4, 0, sizeof(struct sockaddr_storage) - *VAR_4);
}
