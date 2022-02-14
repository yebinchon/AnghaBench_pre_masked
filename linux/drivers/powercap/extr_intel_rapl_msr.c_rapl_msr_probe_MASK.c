
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_3__ {int pcap_rapl_online; int control_type; int write_raw; int read_raw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_6)
{
 int VAR_7;

 VAR_3.read_raw = VAR_4;
 VAR_3.write_raw = VAR_5;

 VAR_3.control_type = FUNC_3(((void*)0), "intel-rapl", ((void*)0));
 if (FUNC_0(VAR_3.control_type)) {
  FUNC_5("failed to register powercap control_type.\n");
  return FUNC_1(VAR_3.control_type);
 }

 VAR_7 = FUNC_2(VAR_0, "powercap/rapl:online",
    VAR_2, VAR_1);
 if (VAR_7 < 0)
  goto out;
 VAR_3.pcap_rapl_online = VAR_7;


 FUNC_6(&VAR_3);

 return 0;

out:
 if (VAR_7)
  FUNC_4(VAR_3.control_type);
 return VAR_7;
}
