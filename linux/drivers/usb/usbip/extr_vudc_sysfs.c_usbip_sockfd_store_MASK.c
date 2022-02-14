
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ status; int lock; void* tcp_tx; void* tcp_rx; struct socket* tcp_socket; } ;
struct vudc {int connected; int lock; TYPE_1__ ud; int start_time; int pullup; int driver; } ;
struct socket {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,int ,int*) ;
 void* FUNC_3 (int *,TYPE_1__*,char*) ;
 int FUNC_4 (int *) ;
 struct socket* FUNC_5 (int,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int VAR_6 ;
 int FUNC_11 (struct vudc*) ;
 int VAR_7 ;

__attribute__((used)) static ssize_t FUNC_12(struct device *VAR_8, struct device_attribute *VAR_9,
       const char *VAR_10, size_t VAR_11)
{
 struct vudc *VAR_12 = (struct vudc *) FUNC_1(VAR_8);
 int VAR_13;
 int VAR_14 = 0;
 int VAR_15;
 struct socket *VAR_16;
 unsigned long VAR_17;
 int VAR_18;

 VAR_13 = FUNC_2(VAR_10, 0, &VAR_14);
 if (VAR_13 != 0)
  return -VAR_1;

 if (!VAR_12) {
  FUNC_0(VAR_8, "no device");
  return -VAR_2;
 }
 FUNC_7(&VAR_12->lock, VAR_17);

 if (!VAR_12->driver || !VAR_12->pullup) {
  FUNC_0(VAR_8, "gadget not bound");
  VAR_18 = -VAR_2;
  goto unlock;
 }

 if (VAR_14 != -1) {
  if (VAR_12->connected) {
   FUNC_0(VAR_8, "Device already connected");
   VAR_18 = -VAR_0;
   goto unlock;
  }

  FUNC_6(&VAR_12->ud.lock);

  if (VAR_12->ud.status != VAR_3) {
   VAR_18 = -VAR_1;
   goto unlock_ud;
  }

  VAR_16 = FUNC_5(VAR_14, &VAR_15);
  if (!VAR_16) {
   FUNC_0(VAR_8, "failed to lookup sock");
   VAR_18 = -VAR_1;
   goto unlock_ud;
  }

  VAR_12->ud.tcp_socket = VAR_16;

  FUNC_8(&VAR_12->ud.lock);
  FUNC_9(&VAR_12->lock, VAR_17);

  VAR_12->ud.tcp_rx = FUNC_3(&VAR_6,
          &VAR_12->ud, "vudc_rx");
  VAR_12->ud.tcp_tx = FUNC_3(&VAR_7,
          &VAR_12->ud, "vudc_tx");

  FUNC_7(&VAR_12->lock, VAR_17);
  FUNC_6(&VAR_12->ud.lock);
  VAR_12->ud.status = VAR_4;
  FUNC_8(&VAR_12->ud.lock);

  FUNC_4(&VAR_12->start_time);
  FUNC_11(VAR_12);
  VAR_12->connected = 1;
 } else {
  if (!VAR_12->connected) {
   FUNC_0(VAR_8, "Device not connected");
   VAR_18 = -VAR_1;
   goto unlock;
  }

  FUNC_6(&VAR_12->ud.lock);
  if (VAR_12->ud.status != VAR_4) {
   VAR_18 = -VAR_1;
   goto unlock_ud;
  }
  FUNC_8(&VAR_12->ud.lock);

  FUNC_10(&VAR_12->ud, VAR_5);
 }

 FUNC_9(&VAR_12->lock, VAR_17);

 return VAR_11;

unlock_ud:
 FUNC_8(&VAR_12->ud.lock);
unlock:
 FUNC_9(&VAR_12->lock, VAR_17);

 return VAR_18;
}
