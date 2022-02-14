
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_ec_hdr {int ec; } ;
struct ubi_device {int ec_hdr_alsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long long VAR_4 ;
 long long FUNC_0 (int ) ;
 int FUNC_1 (long long) ;
 int FUNC_2 (struct ubi_ec_hdr*) ;
 struct ubi_ec_hdr* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ubi_device*,int,struct ubi_ec_hdr*,int ) ;
 int FUNC_5 (struct ubi_device*,int,int ) ;
 int FUNC_6 (struct ubi_device*,int,struct ubi_ec_hdr*) ;

__attribute__((used)) static int FUNC_7(struct ubi_device *VAR_5, int VAR_6)
{
 int VAR_7;
 struct ubi_ec_hdr *VAR_8;
 long long VAR_9;

 VAR_8 = FUNC_3(VAR_5->ec_hdr_alsize, VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_7 = FUNC_4(VAR_5, VAR_6, VAR_8, 0);
 if (VAR_7 < 0)
  goto out;
 else if (VAR_7 && VAR_7 != VAR_3) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_7 = FUNC_5(VAR_5, VAR_6, 0);
 if (VAR_7 < 0)
  goto out;

 VAR_9 = FUNC_0(VAR_8->ec);
 VAR_9 += VAR_7;
 if (VAR_9 > VAR_4) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_8->ec = FUNC_1(VAR_9);
 VAR_7 = FUNC_6(VAR_5, VAR_6, VAR_8);
 if (VAR_7 < 0)
  goto out;

 VAR_7 = VAR_9;
out:
 FUNC_2(VAR_8);
 return VAR_7;
}
