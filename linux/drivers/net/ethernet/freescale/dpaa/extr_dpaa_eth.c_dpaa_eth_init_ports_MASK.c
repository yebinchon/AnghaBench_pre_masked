
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_device {struct fman_port** port; } ;
struct fman_port {int dummy; } ;
struct fm_port_fqs {int rx_pcdq; int rx_defq; int rx_errq; int tx_defq; int tx_errq; } ;
struct dpaa_buffer_layout {int dummy; } ;
struct dpaa_bp {int dummy; } ;
struct device {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct fman_port*,struct dpaa_bp**,size_t,int ,int ,int ,struct dpaa_buffer_layout*) ;
 int FUNC_1 (struct fman_port*,int ,int ,struct dpaa_buffer_layout*) ;

__attribute__((used)) static int FUNC_2(struct mac_device *VAR_2,
          struct dpaa_bp **VAR_3, size_t VAR_4,
          struct fm_port_fqs *VAR_5,
          struct dpaa_buffer_layout *VAR_6,
          struct device *VAR_7)
{
 struct fman_port *VAR_8 = VAR_2->port[VAR_0];
 struct fman_port *VAR_9 = VAR_2->port[VAR_1];
 int VAR_10;

 VAR_10 = FUNC_1(VAR_9, VAR_5->tx_errq,
        VAR_5->tx_defq, &VAR_6[VAR_1]);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_0(VAR_8, VAR_3, VAR_4, VAR_5->rx_errq,
        VAR_5->rx_defq, VAR_5->rx_pcdq,
        &VAR_6[VAR_0]);

 return VAR_10;
}
