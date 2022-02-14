
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct local_info {scalar_t__ iw_mode; int proc; scalar_t__ ddev; scalar_t__ dev; } ;
struct hostap_interface {struct local_info* local; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct local_info*,int ,int ,char*,int ) ;
 int FUNC_1 (struct local_info*) ;
 int FUNC_2 (struct local_info*) ;
 struct hostap_interface* FUNC_3 (struct net_device*) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_5 (char*,int ,int ,int ,struct local_info*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_5)
{
 struct hostap_interface *VAR_6;
 struct local_info *VAR_7;

 VAR_6 = FUNC_3(VAR_5);
 VAR_7 = VAR_6->local;
 VAR_7->ddev = FUNC_0(VAR_7, VAR_0, 0,
        "", VAR_3);

 if (VAR_7->ddev) {
  if (VAR_7->iw_mode == VAR_2 ||
      VAR_7->iw_mode == VAR_1) {
   FUNC_4(VAR_7->dev);
   FUNC_4(VAR_7->ddev);
  }
  FUNC_2(VAR_7);

  FUNC_5("registers", 0, VAR_7->proc,
     VAR_4, VAR_7);

  FUNC_1(VAR_7);
  return 0;
 }

 return -1;
}
