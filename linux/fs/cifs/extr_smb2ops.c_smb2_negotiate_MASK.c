
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cifs_ses {TYPE_1__* server; } ;
struct TYPE_2__ {scalar_t__ CurrentMid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int const,struct cifs_ses*) ;

__attribute__((used)) static int
FUNC_1(const unsigned int VAR_2, struct cifs_ses *VAR_3)
{
 int VAR_4;

 VAR_3->server->CurrentMid = 0;
 VAR_4 = FUNC_0(VAR_2, VAR_3);

 if (VAR_4 == -VAR_0)
  VAR_4 = -VAR_1;
 return VAR_4;
}
