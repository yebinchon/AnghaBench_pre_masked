
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad5933_state {unsigned char ctrl_lb; int client; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,unsigned char*) ;

__attribute__((used)) static int FUNC_1(struct ad5933_state *VAR_2)
{
 unsigned char VAR_3 = VAR_2->ctrl_lb | VAR_0;

 return FUNC_0(VAR_2->client,
   VAR_1, 1, &VAR_3);
}
