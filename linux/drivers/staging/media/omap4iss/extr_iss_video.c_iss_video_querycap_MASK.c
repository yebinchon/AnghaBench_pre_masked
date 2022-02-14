
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int bus_info; int card; int driver; } ;
struct TYPE_2__ {char* name; } ;
struct iss_video {TYPE_1__ video; } ;
struct file {int dummy; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 struct iss_video* FUNC_1 (struct file*) ;

__attribute__((used)) static int
FUNC_2(struct file *VAR_5, void *VAR_6, struct v4l2_capability *VAR_7)
{
 struct iss_video *VAR_8 = FUNC_1(VAR_5);

 FUNC_0(VAR_7->driver, VAR_0, sizeof(VAR_7->driver));
 FUNC_0(VAR_7->card, VAR_8->video.name, sizeof(VAR_7->card));
 FUNC_0(VAR_7->bus_info, "media", sizeof(VAR_7->bus_info));
 VAR_7->capabilities = VAR_1 | VAR_2
     | VAR_3 | VAR_4;

 return 0;
}
