
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbd_connection {scalar_t__ keep_alive_requested; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct smbd_connection *VAR_2)
{
 if (VAR_2->keep_alive_requested == VAR_0) {
  VAR_2->keep_alive_requested = VAR_1;
  return 1;
 }
 return 0;
}
