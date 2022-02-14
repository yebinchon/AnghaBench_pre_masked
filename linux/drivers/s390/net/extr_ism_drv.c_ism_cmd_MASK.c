
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ism_resp_hdr {int ret; int len; } ;
struct ism_req_hdr {int len; } ;
struct ism_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct ism_dev*,struct ism_resp_hdr*,int,int) ;
 int FUNC_2 (struct ism_dev*,struct ism_req_hdr*,int,int) ;
 int FUNC_3 (int ,int ,struct ism_resp_hdr*,int) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct ism_dev *VAR_2, void *VAR_3)
{
 struct ism_req_hdr *VAR_4 = VAR_3;
 struct ism_resp_hdr *VAR_5 = VAR_3;

 FUNC_2(VAR_2, VAR_4 + 1, sizeof(*VAR_4), VAR_4->len - sizeof(*VAR_4));
 FUNC_2(VAR_2, VAR_4, 0, sizeof(*VAR_4));

 FUNC_0(VAR_5->ret, VAR_0);

 FUNC_1(VAR_2, VAR_5, 0, sizeof(*VAR_5));
 if (VAR_5->ret) {
  FUNC_4(VAR_1, 0, "cmd failure");
  FUNC_3(VAR_1, 0, VAR_5, sizeof(*VAR_5));
  goto out;
 }
 FUNC_1(VAR_2, VAR_5 + 1, sizeof(*VAR_5), VAR_5->len - sizeof(*VAR_5));
out:
 return VAR_5->ret;
}
