
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct port_info {int adapter; } ;


 int FUNC_0 (struct port_info*,unsigned int,int*,int const*,int,int *) ;
 int FUNC_1 (int ,int const*,int,int *) ;

int FUNC_2(struct port_info *VAR_0, unsigned int VAR_1,
     int *VAR_2, const u8 *VAR_3,
     bool VAR_4, u8 *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2,
          VAR_3, VAR_4, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_1(VAR_0->adapter, VAR_3, *VAR_2, ((void*)0));
 return VAR_6;
}
