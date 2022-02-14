
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct seq_file {struct device* private; } ;
struct device {int parent; } ;
struct ab8500 {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct device*,scalar_t__,scalar_t__,int *) ;
 int FUNC_1 (struct device*,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct ab8500* FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*) ;
 scalar_t__ FUNC_5 (struct ab8500*) ;
 scalar_t__ FUNC_6 (struct ab8500*) ;
 int FUNC_7 (struct seq_file*,char*,scalar_t__,...) ;

__attribute__((used)) static int FUNC_8(struct seq_file *VAR_7, void *VAR_8)
{
 struct device *VAR_9 = VAR_7->private;
 struct ab8500 *VAR_10;
 int VAR_11;
 u8 VAR_12;
 u8 VAR_13;
 u32 VAR_14 = VAR_3;
 u32 VAR_15 = VAR_1;
 u32 VAR_16;

 VAR_10 = FUNC_3(VAR_9->parent);
 FUNC_4(VAR_9, "WARNING! This operation can interfer with modem side\n"
  "and should only be done with care\n");

 VAR_11 = FUNC_0(VAR_9,
  VAR_2, VAR_5, &VAR_13);
 if (VAR_11 < 0)
  goto report_read_failure;


 VAR_11 = FUNC_1(VAR_9,
  VAR_2, VAR_5,
  VAR_4);
 if (VAR_11 < 0)
  goto report_write_failure;

 FUNC_7(VAR_7, " bank 0x%02X:\n", VAR_14);

 if (FUNC_6(VAR_10) || FUNC_5(VAR_10))
  VAR_15 = VAR_6;

 for (VAR_16 = VAR_0; VAR_16 <= VAR_15; VAR_16++) {
  VAR_11 = FUNC_0(VAR_9,
   VAR_14, VAR_16, &VAR_12);
  if (VAR_11 < 0)
   goto report_read_failure;

  FUNC_7(VAR_7, "  [0x%02X/0x%02X]: 0x%02X\n", VAR_14, VAR_16, VAR_12);
 }
 VAR_11 = FUNC_1(VAR_9,
  VAR_2, VAR_5, VAR_13);
 if (VAR_11 < 0)
  goto report_write_failure;

 return 0;

report_read_failure:
 FUNC_2(VAR_9, "ab->read fail %d\n", VAR_11);
 return VAR_11;

report_write_failure:
 FUNC_2(VAR_9, "ab->write fail %d\n", VAR_11);
 return VAR_11;
}
