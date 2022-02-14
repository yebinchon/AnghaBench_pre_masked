
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct connection {int sock; } ;
typedef int localaddr ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct sockaddr*,int) ;
 int FUNC_1 (int ,int ,int ,char*,int) ;
 int FUNC_2 (char*,int ,int,int) ;
 int FUNC_3 (struct sockaddr_storage*,int ,int*) ;
 int FUNC_4 (struct sockaddr_storage*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct connection *VAR_4, uint16_t VAR_5)
{
 struct sockaddr_storage VAR_6;
 int VAR_7, VAR_8, VAR_9 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  FUNC_4(&VAR_6, VAR_2[VAR_7], sizeof(VAR_6));
  FUNC_3(&VAR_6, VAR_5, &VAR_8);

  if (!VAR_7)
   VAR_9 = FUNC_0(VAR_4->sock,
          (struct sockaddr *)&VAR_6,
          VAR_8);
  else
   VAR_9 = FUNC_1(VAR_4->sock, VAR_1,
         VAR_0,
         (char *)&VAR_6, VAR_8);

  if (VAR_9 < 0) {
   FUNC_2("Can't bind to %d addr number %d, %d.\n",
      VAR_5, VAR_7 + 1, VAR_9);
   break;
  }
 }
 return VAR_9;
}
