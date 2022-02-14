
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct chelsio_vpd_t {int dummy; } ;
typedef int adapter_t ;
typedef int __le32 ;


 int FUNC_0 (int *,int,int *) ;

__attribute__((used)) static int FUNC_1(adapter_t *VAR_0, struct chelsio_vpd_t *VAR_1)
{
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; !VAR_3 && VAR_2 < sizeof(*VAR_1); VAR_2 += sizeof(u32))
  VAR_3 = FUNC_0(VAR_0, VAR_2,
          (__le32 *)((u8 *)VAR_1 + VAR_2));

 return VAR_3;
}
