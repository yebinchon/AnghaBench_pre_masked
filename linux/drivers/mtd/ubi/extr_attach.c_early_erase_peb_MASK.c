
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_ec_hdr {int ec; } ;
struct ubi_device {int ec_hdr_alsize; } ;
struct ubi_attach_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long long VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ubi_ec_hdr*) ;
 struct ubi_ec_hdr* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ubi_device*,char*,int,int) ;
 int FUNC_4 (struct ubi_device*,int,int ) ;
 int FUNC_5 (struct ubi_device*,int,struct ubi_ec_hdr*) ;

__attribute__((used)) static int FUNC_6(struct ubi_device *VAR_4,
      const struct ubi_attach_info *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8;
 struct ubi_ec_hdr *VAR_9;

 if ((long long)VAR_7 >= VAR_3) {




  FUNC_3(VAR_4, "erase counter overflow at PEB %d, EC %d",
   VAR_6, VAR_7);
  return -VAR_0;
 }

 VAR_9 = FUNC_2(VAR_4->ec_hdr_alsize, VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->ec = FUNC_0(VAR_7);

 VAR_8 = FUNC_4(VAR_4, VAR_6, 0);
 if (VAR_8 < 0)
  goto out_free;

 VAR_8 = FUNC_5(VAR_4, VAR_6, VAR_9);

out_free:
 FUNC_1(VAR_9);
 return VAR_8;
}
