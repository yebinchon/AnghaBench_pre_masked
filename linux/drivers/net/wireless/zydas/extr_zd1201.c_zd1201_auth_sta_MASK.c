
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd1201 {int ap; } ;
struct sockaddr {int sa_data; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,int ,int ) ;
 struct zd1201* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct zd1201*,int ,unsigned char*,int,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3,
    struct iw_request_info *VAR_4, struct sockaddr *VAR_5, char *VAR_6)
{
 struct zd1201 *VAR_7 = FUNC_1(VAR_3);
 unsigned char VAR_8[10];

 if (!VAR_7->ap)
  return -VAR_0;

 FUNC_0(VAR_8, VAR_5->sa_data, VAR_1);
 *(short*)(VAR_8+6) = 0;
 *(short*)(VAR_8+8) = 0;

 return FUNC_2(VAR_7, VAR_2, VAR_8, 10, 1);
}
