
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ubi_ec_hdr {int magic; } ;
struct ubi_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct ubi_device const*) ;
 int FUNC_3 (struct ubi_ec_hdr const*) ;
 int FUNC_4 (struct ubi_device const*,char*,int,...) ;
 int FUNC_5 (struct ubi_device const*,struct ubi_ec_hdr const*) ;

__attribute__((used)) static int FUNC_6(const struct ubi_device *VAR_2, int VAR_3,
        const struct ubi_ec_hdr *VAR_4)
{
 int VAR_5;
 uint32_t VAR_6;

 if (!FUNC_2(VAR_2))
  return 0;

 VAR_6 = FUNC_0(VAR_4->magic);
 if (VAR_6 != VAR_1) {
  FUNC_4(VAR_2, "bad magic %#08x, must be %#08x",
   VAR_6, VAR_1);
  goto fail;
 }

 VAR_5 = FUNC_5(VAR_2, VAR_4);
 if (VAR_5) {
  FUNC_4(VAR_2, "self-check failed for PEB %d", VAR_3);
  goto fail;
 }

 return 0;

fail:
 FUNC_3(VAR_4);
 FUNC_1();
 return -VAR_0;
}
