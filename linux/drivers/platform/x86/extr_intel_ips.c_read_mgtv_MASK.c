
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct ips_driver {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u16 FUNC_2(struct ips_driver *VAR_7)
{
 u16 VAR_8;
 u64 VAR_9, VAR_10;
 u64 VAR_11;

 VAR_11 = FUNC_0(VAR_4);
 VAR_11 = (VAR_11 & VAR_5) >> VAR_6;

 VAR_9 = VAR_10 = FUNC_1(VAR_3);
 VAR_9 = (VAR_9 & VAR_1) >> VAR_2;
 VAR_10 = VAR_10 & VAR_0;

 VAR_8 = ((VAR_11 * VAR_9 + 0x40) >> 7) + VAR_10;

 return 0;
}
