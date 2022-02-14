
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sclp_core_info {int dummy; } ;
struct TYPE_2__ {int length; int response_code; } ;
struct read_cpu_info_sccb {TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct sclp_core_info*,struct read_cpu_info_sccb*) ;
 int FUNC_4 (int ,struct read_cpu_info_sccb*,int ) ;

int FUNC_5(struct sclp_core_info *VAR_8)
{
 int VAR_9;
 struct read_cpu_info_sccb *VAR_10;

 if (!VAR_6)
  return -VAR_2;
 VAR_10 = (void *) FUNC_1(VAR_4 | VAR_3);
 if (!VAR_10)
  return -VAR_1;
 VAR_10->header.length = sizeof(*VAR_10);
 VAR_9 = FUNC_4(VAR_5, VAR_10,
           VAR_7);
 if (VAR_9)
  goto out;
 if (VAR_10->header.response_code != 0x0010) {
  FUNC_2("readcpuinfo failed (response=0x%04x)\n",
   VAR_10->header.response_code);
  VAR_9 = -VAR_0;
  goto out;
 }
 FUNC_3(VAR_8, VAR_10);
out:
 FUNC_0((unsigned long) VAR_10);
 return VAR_9;
}
