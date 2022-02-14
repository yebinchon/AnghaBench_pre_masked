
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct da903x_chip {int client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int*) ;

__attribute__((used)) static int FUNC_1(struct da903x_chip *VAR_1, unsigned int *VAR_2)
{
 uint8_t VAR_3[2] = {0, 0};
 int VAR_4 = 0;

 VAR_4 = FUNC_0(VAR_1->client, VAR_0, 2, VAR_3);
 if (VAR_4)
  return VAR_4;

 *VAR_2 = (VAR_3[1] << 8) | VAR_3[0];
 return 0;
}
