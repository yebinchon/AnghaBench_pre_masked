
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad5933_state {int client; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,unsigned char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ad5933_state *VAR_3, unsigned char VAR_4)
{
 unsigned char VAR_5, VAR_6 = VAR_0;
 int VAR_7;

 while (VAR_6--) {
  VAR_7 = FUNC_0(VAR_3->client, VAR_1, 1, &VAR_5);
  if (VAR_7 < 0)
   return VAR_7;
  if (VAR_5 & VAR_4)
   return VAR_5;
  FUNC_1();
  FUNC_2(1);
 }

 return -VAR_2;
}
