
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
 int FUNC_0 (int *) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_1(VAR_1);
 struct bfad_im_port_s *VAR_5 =
   (struct bfad_im_port_s *) VAR_4->hostdata[0];
 struct bfad_s *VAR_6 = VAR_5->bfad;

 return FUNC_2(VAR_3, VAR_0, "%d\n",
   FUNC_0(&VAR_6->bfa));
}
