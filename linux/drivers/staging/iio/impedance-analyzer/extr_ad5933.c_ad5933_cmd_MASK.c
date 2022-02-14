
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad5933_state {unsigned char ctrl_hb; int client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,unsigned char*) ;

__attribute__((used)) static int FUNC_1(struct ad5933_state *VAR_1, unsigned char VAR_2)
{
 unsigned char VAR_3 = VAR_1->ctrl_hb | VAR_2;

 return FUNC_0(VAR_1->client,
   VAR_0, 1, &VAR_3);
}
