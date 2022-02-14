
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int u8 ;
struct fw_hdr {int flags; } ;
struct csio_hw {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (struct csio_hw*,int *,int ) ;
 int FUNC_1 (struct csio_hw*,int ,int ) ;
 int FUNC_2 (struct csio_hw*,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct csio_hw *VAR_1, uint32_t VAR_2,
    const u8 *VAR_3, uint32_t VAR_4, int32_t VAR_5)
{
 const struct fw_hdr *VAR_6 = (const struct fw_hdr *)VAR_3;
 int VAR_7, VAR_8;

 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_5);
 if (VAR_8 != 0 && !VAR_5)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_1, (uint8_t *) VAR_3, VAR_4);
 if (VAR_8 != 0)
  return VAR_8;
 VAR_7 = ((FUNC_3(VAR_6->flags) & VAR_0) == 0);
 return FUNC_2(VAR_1, VAR_2, VAR_7);
}
