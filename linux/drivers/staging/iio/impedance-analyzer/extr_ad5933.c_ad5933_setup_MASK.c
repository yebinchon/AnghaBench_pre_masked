
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ad5933_state {int settling_cycles; int freq_points; int client; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int *) ;
 int FUNC_1 (struct ad5933_state*) ;
 int FUNC_2 (struct ad5933_state*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ad5933_state *VAR_4)
{
 __be16 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_4, VAR_1, 10000);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_4, VAR_0, 200);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_4->settling_cycles = 10;
 VAR_5 = FUNC_3(VAR_4->settling_cycles);

 VAR_6 = FUNC_0(VAR_4->client,
          VAR_3,
          2, (u8 *)&VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_4->freq_points = 100;
 VAR_5 = FUNC_3(VAR_4->freq_points);

 return FUNC_0(VAR_4->client, VAR_2, 2, (u8 *)&VAR_5);
}
