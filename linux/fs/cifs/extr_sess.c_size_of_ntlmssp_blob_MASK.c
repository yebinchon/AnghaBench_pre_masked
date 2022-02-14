
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct cifs_ses {scalar_t__ user_name; scalar_t__ domainName; TYPE_1__ auth_key; } ;
typedef int AUTHENTICATE_MESSAGE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct cifs_ses *VAR_4)
{
 int VAR_5 = sizeof(AUTHENTICATE_MESSAGE) + VAR_4->auth_key.len
  - VAR_3 + VAR_0 + 2;

 if (VAR_4->domainName)
  VAR_5 += 2 * FUNC_0(VAR_4->domainName, VAR_1);
 else
  VAR_5 += 2;

 if (VAR_4->user_name)
  VAR_5 += 2 * FUNC_0(VAR_4->user_name, VAR_2);
 else
  VAR_5 += 2;

 return VAR_5;
}
