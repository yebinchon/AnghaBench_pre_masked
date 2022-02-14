
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct loopback_test {int device_count; int poll_count; TYPE_1__* fds; struct loopback_device* devices; } ;
struct loopback_device {char* sysfs_entry; } ;
typedef int buf ;
struct TYPE_2__ {scalar_t__ fd; int events; scalar_t__ revents; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct loopback_test*,int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (char*,int ) ;
 int FUNC_4 (scalar_t__,char*,int) ;
 int FUNC_5 (char*,int,char*,char*,char*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct loopback_test *VAR_5)
{
 struct loopback_device *VAR_6;
 char VAR_7[VAR_2];
 char VAR_8;
 int VAR_9 = 0;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_5->device_count; VAR_10++) {
  VAR_6 = &VAR_5->devices[VAR_10];

  if (!FUNC_1(VAR_5, VAR_10))
   continue;

  FUNC_5(VAR_7, sizeof(VAR_7), "%s%s", VAR_6->sysfs_entry, "iteration_count");
  VAR_5->fds[VAR_9].fd = FUNC_3(VAR_7, VAR_3);
  if (VAR_5->fds[VAR_9].fd < 0) {
   FUNC_2(VAR_4, "Error opening poll file!\n");
   goto err;
  }
  FUNC_4(VAR_5->fds[VAR_9].fd, &VAR_8, 1);
  VAR_5->fds[VAR_9].events = VAR_0|VAR_1;
  VAR_5->fds[VAR_9].revents = 0;
  VAR_9++;
 }

 VAR_5->poll_count = VAR_9;

 return 0;

err:
 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
  FUNC_0(VAR_5->fds[VAR_10].fd);

 return -1;
}
