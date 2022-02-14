
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct net_device {int dummy; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,void*,int) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3, unsigned int VAR_4, int VAR_5,
     void *VAR_6)
{
 u16 VAR_7, VAR_8;
 if (VAR_4 & 1 || VAR_5 & 1)
  return -1;

 VAR_7 = VAR_4 >> 7;
 VAR_8 = VAR_4 & 0x7f;

 FUNC_1(VAR_7, VAR_2);
 FUNC_1(VAR_8, VAR_1);

 FUNC_3(5);
 FUNC_0(VAR_0, VAR_6, VAR_5 / 2);


 return 0;
}
