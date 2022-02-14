
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_ec_hdr {int ec; } ;
struct ubi_device {int ec_hdr_alsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long long FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct ubi_ec_hdr*) ;
 struct ubi_ec_hdr* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ubi_device*) ;
 int FUNC_5 (struct ubi_device*,char*,long long,...) ;
 int FUNC_6 (struct ubi_device*,int,struct ubi_ec_hdr*,int ) ;

__attribute__((used)) static int FUNC_7(struct ubi_device *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 long long VAR_7;
 struct ubi_ec_hdr *VAR_8;

 if (!FUNC_4(VAR_3))
  return 0;

 VAR_8 = FUNC_3(VAR_3->ec_hdr_alsize, VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_6 = FUNC_6(VAR_3, VAR_4, VAR_8, 0);
 if (VAR_6 && VAR_6 != VAR_2) {

  VAR_6 = 0;
  goto out_free;
 }

 VAR_7 = FUNC_0(VAR_8->ec);
 if (VAR_5 != VAR_7 && VAR_7 - VAR_5 > 1) {
  FUNC_5(VAR_3, "self-check failed for PEB %d", VAR_4);
  FUNC_5(VAR_3, "read EC is %lld, should be %d", VAR_7, VAR_5);
  FUNC_1();
  VAR_6 = 1;
 } else
  VAR_6 = 0;

out_free:
 FUNC_2(VAR_8);
 return VAR_6;
}
