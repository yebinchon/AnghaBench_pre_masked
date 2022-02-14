
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ status; int sockfd; int lock; void* tcp_tx; void* tcp_rx; struct socket* tcp_socket; } ;
struct stub_device {TYPE_1__ ud; } ;
struct socket {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 struct stub_device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*) ;
 void* FUNC_3 (int ,TYPE_1__*,char*) ;
 struct socket* FUNC_4 (int,int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const*,char*,int*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (TYPE_1__*,int ) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_7, struct device_attribute *VAR_8,
       const char *VAR_9, size_t VAR_10)
{
 struct stub_device *VAR_11 = FUNC_1(VAR_7);
 int VAR_12 = 0;
 struct socket *VAR_13;
 int VAR_14;

 if (!VAR_11) {
  FUNC_0(VAR_7, "sdev is null\n");
  return -VAR_1;
 }

 VAR_14 = FUNC_7(VAR_9, "%d", &VAR_12);
 if (VAR_14 != 1)
  return -VAR_0;

 if (VAR_12 != -1) {
  int VAR_15;

  FUNC_2(VAR_7, "stub up\n");

  FUNC_5(&VAR_11->ud.lock);

  if (VAR_11->ud.status != VAR_3) {
   FUNC_0(VAR_7, "not ready\n");
   goto err;
  }

  VAR_13 = FUNC_4(VAR_12, &VAR_15);
  if (!VAR_13)
   goto err;

  VAR_11->ud.tcp_socket = VAR_13;
  VAR_11->ud.sockfd = VAR_12;

  FUNC_6(&VAR_11->ud.lock);

  VAR_11->ud.tcp_rx = FUNC_3(VAR_5, &VAR_11->ud,
        "stub_rx");
  VAR_11->ud.tcp_tx = FUNC_3(VAR_6, &VAR_11->ud,
        "stub_tx");

  FUNC_5(&VAR_11->ud.lock);
  VAR_11->ud.status = VAR_4;
  FUNC_6(&VAR_11->ud.lock);

 } else {
  FUNC_2(VAR_7, "stub down\n");

  FUNC_5(&VAR_11->ud.lock);
  if (VAR_11->ud.status != VAR_4)
   goto err;

  FUNC_6(&VAR_11->ud.lock);

  FUNC_8(&VAR_11->ud, VAR_2);
 }

 return VAR_10;

err:
 FUNC_6(&VAR_11->ud.lock);
 return -VAR_0;
}
