
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct domain_device {scalar_t__ dev_type; scalar_t__ frame_rcvd; } ;
struct dev_to_host_fis {int dummy; } ;
struct ata_taskfile {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ata_taskfile*) ;
 int FUNC_1 (int const*,struct ata_taskfile*) ;

__attribute__((used)) static int FUNC_2(struct domain_device *VAR_2)
{
 struct dev_to_host_fis *VAR_3 =
  (struct dev_to_host_fis *) VAR_2->frame_rcvd;
 struct ata_taskfile VAR_4;

 if (VAR_2->dev_type == VAR_1)
  return VAR_0;

 FUNC_1((const u8 *)VAR_3, &VAR_4);

 return FUNC_0(&VAR_4);
}
