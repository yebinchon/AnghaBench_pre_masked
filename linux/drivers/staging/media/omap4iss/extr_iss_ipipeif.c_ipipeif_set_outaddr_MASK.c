
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iss_ipipeif_device {int dummy; } ;
struct iss_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iss_device*,int ,int ,int) ;
 struct iss_device* FUNC_1 (struct iss_ipipeif_device*) ;

__attribute__((used)) static void FUNC_2(struct iss_ipipeif_device *VAR_5, u32 VAR_6)
{
 struct iss_device *VAR_7 = FUNC_1(VAR_5);


 FUNC_0(VAR_7, VAR_4, VAR_2,
        (VAR_6 >> (16 + 5)) & VAR_3);
 FUNC_0(VAR_7, VAR_4, VAR_0,
        (VAR_6 >> 5) & VAR_1);
}
