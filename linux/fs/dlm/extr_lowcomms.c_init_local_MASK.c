
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sockaddr_storage** VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct sockaddr_storage*,int) ;
 struct sockaddr_storage* FUNC_1 (struct sockaddr_storage*,int,int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct sockaddr_storage VAR_4, *VAR_5;
 int VAR_6;

 VAR_3 = 0;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (FUNC_0(&VAR_4, VAR_6))
   break;

  VAR_5 = FUNC_1(&VAR_4, sizeof(*VAR_5), VAR_1);
  if (!VAR_5)
   break;
  VAR_2[VAR_3++] = VAR_5;
 }
}
