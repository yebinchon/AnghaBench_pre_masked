
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pps_source_info {int mode; int name; int * echo; } ;
struct TYPE_2__ {int mode; int api_version; } ;
struct pps_device {int dev; int lock; int queue; struct pps_source_info info; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pps_device* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pps_device*) ;
 struct pps_device* FUNC_4 (int,int ) ;
 int * VAR_8 ;
 int FUNC_5 (struct pps_device*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *) ;

struct pps_device *FUNC_8(struct pps_source_info *VAR_9,
  int VAR_10)
{
 struct pps_device *VAR_11;
 int VAR_12;


 if ((VAR_9->mode & VAR_10) != VAR_10) {
  FUNC_6("%s: unsupported default parameters\n",
     VAR_9->name);
  VAR_12 = -VAR_0;
  goto pps_register_source_exit;
 }
 if ((VAR_9->mode & (VAR_7 | VAR_6)) == 0) {
  FUNC_6("%s: unspecified time format\n",
     VAR_9->name);
  VAR_12 = -VAR_0;
  goto pps_register_source_exit;
 }


 VAR_11 = FUNC_4(sizeof(struct pps_device), VAR_2);
 if (VAR_11 == ((void*)0)) {
  VAR_12 = -VAR_1;
  goto pps_register_source_exit;
 }




 VAR_11->params.api_version = VAR_3;
 VAR_11->params.mode = VAR_10;
 VAR_11->info = *VAR_9;


 if ((VAR_11->info.mode & (VAR_4 | VAR_5)) &&
   VAR_11->info.echo == ((void*)0))
  VAR_11->info.echo = VAR_8;

 FUNC_2(&VAR_11->queue);
 FUNC_7(&VAR_11->lock);


 VAR_12 = FUNC_5(VAR_11);
 if (VAR_12 < 0) {
  FUNC_6("%s: unable to create char device\n",
     VAR_9->name);
  goto kfree_pps;
 }

 FUNC_1(VAR_11->dev, "new PPS source %s\n", VAR_9->name);

 return VAR_11;

kfree_pps:
 FUNC_3(VAR_11);

pps_register_source_exit:
 FUNC_6("%s: unable to register source\n", VAR_9->name);

 return FUNC_0(VAR_12);
}
