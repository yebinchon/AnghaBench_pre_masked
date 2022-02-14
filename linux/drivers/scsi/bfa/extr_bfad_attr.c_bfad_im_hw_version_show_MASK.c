
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bfad_s {int bfa; } ;
struct bfad_im_port_s {struct bfad_s* bfad; } ;
struct Scsi_Host {scalar_t__* hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3,
    char *VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_1(VAR_2);
 struct bfad_im_port_s *VAR_6 =
   (struct bfad_im_port_s *) VAR_5->hostdata[0];
 struct bfad_s *VAR_7 = VAR_6->bfad;
 char VAR_8[VAR_0];

 FUNC_0(&VAR_7->bfa, VAR_8);
 return FUNC_2(VAR_4, VAR_1, "%s\n", VAR_8);
}
