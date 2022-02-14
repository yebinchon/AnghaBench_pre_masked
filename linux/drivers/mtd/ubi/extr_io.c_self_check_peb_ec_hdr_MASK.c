
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ubi_ec_hdr {int hdr_crc; } ;
struct ubi_device {int ec_hdr_alsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,struct ubi_ec_hdr*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct ubi_ec_hdr*) ;
 struct ubi_ec_hdr* FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ubi_device const*,int,struct ubi_ec_hdr*) ;
 int FUNC_7 (struct ubi_device const*) ;
 int FUNC_8 (struct ubi_ec_hdr*) ;
 int FUNC_9 (struct ubi_device const*,char*,int,...) ;
 int FUNC_10 (struct ubi_device const*,struct ubi_ec_hdr*,int,int ,int ) ;

__attribute__((used)) static int FUNC_11(const struct ubi_device *VAR_7, int VAR_8)
{
 int VAR_9;
 uint32_t VAR_10, VAR_11;
 struct ubi_ec_hdr *VAR_12;

 if (!FUNC_7(VAR_7))
  return 0;

 VAR_12 = FUNC_4(VAR_7->ec_hdr_alsize, VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_9 = FUNC_10(VAR_7, VAR_12, VAR_8, 0, VAR_4);
 if (VAR_9 && VAR_9 != VAR_6 && !FUNC_5(VAR_9))
  goto exit;

 VAR_10 = FUNC_1(VAR_3, VAR_12, VAR_5);
 VAR_11 = FUNC_0(VAR_12->hdr_crc);
 if (VAR_11 != VAR_10) {
  FUNC_9(VAR_7, "bad CRC, calculated %#08x, read %#08x",
   VAR_10, VAR_11);
  FUNC_9(VAR_7, "self-check failed for PEB %d", VAR_8);
  FUNC_8(VAR_12);
  FUNC_2();
  VAR_9 = -VAR_0;
  goto exit;
 }

 VAR_9 = FUNC_6(VAR_7, VAR_8, VAR_12);

exit:
 FUNC_3(VAR_12);
 return VAR_9;
}
