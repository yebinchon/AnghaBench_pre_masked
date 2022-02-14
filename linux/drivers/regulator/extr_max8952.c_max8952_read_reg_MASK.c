
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max8952_data {int client; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct max8952_data *VAR_0, u8 VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0->client, VAR_1);

 if (VAR_2 > 0)
  VAR_2 &= 0xff;

 return VAR_2;
}
